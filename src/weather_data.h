#ifndef WEATHER_DATA_H
#define WEATHER_DATA_H

typedef enum {
  WEATHER_E_OK = 0,
  WEATHER_E_DISCONNECTED,
  WEATHER_E_PHONE,
  WEATHER_E_NETWORK
} WeatherError;

typedef struct {
  int temperature;
  int intemp;
  int outtemp;
  int condition;
  int sunrise;
  int sunset;
  int current_time;
  char place[60];
  time_t updated;
  WeatherError error;
} WeatherData;

#endif
