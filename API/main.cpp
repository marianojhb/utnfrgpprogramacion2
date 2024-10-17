#include <iostream>
#include "HttpClient.h"
#include <nlohmann/json.hpp>

using namespace std;

int main()
{
    HttpClient cliente;
    string response;
    response = cliente.get("https://api.coindesk.com/v1/bpi/currentprice.json");
//    cout << response << endl;

    nlohmann::json data;

    data = nlohmann::json::parse(response);

    float rate = data["bpi"]["USD"]["rate_float"].get<float>();

    cout << rate << endl;

    return 0;
}
