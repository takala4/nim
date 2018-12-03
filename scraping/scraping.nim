import httpclient, json
var client = newHttpClient()
echo client.getContent("http://google.com")