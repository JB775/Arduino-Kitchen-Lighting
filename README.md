Wireless kitchen LED lighting system designed to control multiple LED lights above kitchen cabinets. Powered by ATTiny85 programmed with an Arduino UNO.

How it works:  A handheld wireless transmitter sends an RF signal to a 315MHz toggle receiver linked to an input pin on an ATTiny85 microcontroller (1MHz internal clock).  When the ATTiny85 receives the input signal, it toggles 4 different output pins that each send out a 40mA signal linked to an ultra-bright LED (220Ω resistor connected from cathode to ground for each LED).  The entire circuit is powered by 3 AA batteries (4.5V).

The ATTiny85 was programmed with an Arduino UNO acting as an ISP.  (First load the 'Arduino as ISP' sketch onto your Arduino then hook it to the ATTiny85 per attached diagram to upload code.)


Built by John Bergandino