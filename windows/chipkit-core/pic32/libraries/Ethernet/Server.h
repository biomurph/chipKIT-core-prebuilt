#ifndef server_h
#define server_h

#include "Print.h"

class Client;

class Server : 
public Print {
private:
  uint16_t _port;
  void accept();
public:
  Server(uint16_t);
  Client available();
  void begin();
  virtual size_t write(uint8_t);
  virtual size_t write(const char *str);
  virtual size_t write(const uint8_t *buf, size_t size);
};

#endif
