Futura Gary (Pebble SDK 3.0)
=================================

Forked from
 - Futura Weather 2 https://github.com/Niknam/futura-weather-sdk2.0

This is based on Futura Weather 2, adapted to show information from my own weather station and also added the following:

 - Battery level and charge indicator.
 - Tap events cause a weather update.
 - Power save mode, where if the watch is still for a while (such as when not attached to an arm) then still mode is 
entered and battery saving happens by not updating the weather every 15 minutes.
 - When leaving still mode the weather is updated immediately.
 - A weather update is never done when the last one was within 3 minutes.
 - For temperatures, the trend up or down is also indicated.
 - Time when the last weather update happened is shown.
 - Reduced power consumption by not having a time and display update every second, now it is every minute and 
only switches to every second for 10 seconds following a weather update event.
