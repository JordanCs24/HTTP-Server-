int main() {
    HttpServer server(8080);
    server.start();
    server.run();
    return 0;
}