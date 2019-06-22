avrdude -C avrdude.conf -c arduino -P %1 -b 19200 -p t85 -U flash:w:%2 -v
Pause