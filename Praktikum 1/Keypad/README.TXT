                                           30. M�rz 2015
                                           Hans H. Heitmann



Beseitigung des nervigen Beeps vom Touchpad:

Ersetzen der Dateien tft.c und tft.h durch die beilienden
Versionen. Beep ist dann standardm��ig ausgeschaltet.
Feedback gibt es stattdessen durch Invertierung der
Tastenfarbe bei Ber�hrung der Taste.


Verhalten kann inviduell ein- und ausgeschaltet werden
mit Hilfe der folgenden Funktion:

void TFT_touch_key_feedback(int beep, int invert);

