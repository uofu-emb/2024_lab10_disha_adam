# Default Register Values
WAKE_EN all 1

SLEEP_EN all 1

ENABLE 0

# Power Consumption
Blink Sleep
30 mA * 3.3 V = 99 mW

Blink Thread
34 mA * 3.3 V = 112.2 mW

Blink Interrupt
@ 1Mhz, 33 mA * 3.3 V = 108.9 mW

Busy Loop
33 mA * 3.3 V = 108.9 mW

Sleep Demo
awake, 29 mA * 3.3 V = 95.7 mW
asleep, 3 mA * 3.3 V = 9.9 mW

Dormant Demo
active, 29 mA * 3.3 V = 95.7 mW
dormat, 2 mA * 3.3v = 6.6 mW
