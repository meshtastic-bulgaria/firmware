#pragma once
#include "ServerAPI.h"
#ifndef USE_WS5500
#include <RAK13800_W5100S.h>

class ethServerAPI : public ServerAPI<EthernetClient>
{
  public:
    explicit ethServerAPI(EthernetClient &_client);
};

class ethServerPort : public APIServerPort<ethServerAPI, EthernetServer>
{
  public:
    explicit ethServerPort(int port) : APIServerPort<ethServerAPI, EthernetServer>(port) {}

    void begin(uint16_t port = 0) override { EthernetServer::begin(); }
};

void initApiServer(int port);
void deInitApiServer();
#endif