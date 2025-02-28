#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <FS.h>
#include <LittleFS.h>

// Set access point credentials
const char *ssid = "ESP8266-GameServer";
const char *password = "12345678";

ESP8266WebServer server(80);

// Serve files dynamically
void handleFileRequest(String path) {
  if (path.endsWith("/")) path += "index.html"; // Default to index.html for root

  // Determine content type based on file extension
  String contentType = "text/plain";
  if (path.endsWith(".html")) contentType = "text/html";
  else if (path.endsWith(".css")) contentType = "text/css";
  else if (path.endsWith(".js")) contentType = "application/javascript";
  else if (path.endsWith(".png")) contentType = "image/png";

  // Check if the file exists
  if (LittleFS.exists(path)) {
    File file = LittleFS.open(path, "r"); // Open the file
    server.streamFile(file, contentType); // Stream the file to the client
    file.close(); // Close the file
  } else {
    server.send(404, "text/plain", "File Not Found"); // Send 404 if file doesn't exist
  }
}

void setup() {
  Serial.begin(115200);

  // Set up Access Point
  WiFi.softAP(ssid, password);
  Serial.println("Access Point Started");
  Serial.print("IP Address: ");
  Serial.println(WiFi.softAPIP());

  // Initialize LittleFS
  if (!LittleFS.begin()) {
    Serial.println("LittleFS Mount Failed");
    return;
  }
  Serial.println("LittleFS Mounted");

  // Serve any file requested
  server.onNotFound([]() {
    handleFileRequest(server.uri()); // Handle file requests
  });

  server.begin();
  Serial.println("HTTP Server Started");
}

void loop() {
  server.handleClient(); // Handle client requests
}
