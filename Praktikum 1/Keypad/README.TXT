                                           30. März 2015
                                           Hans H. Heitmann



Beseitigung des nervigen Beeps vom Touchpad:

Ersetzen der Dateien tft.c und tft.h durch die beilienden
Versionen. Beep ist dann standardmäßig ausgeschaltet.
Feedback gibt es stattdessen durch Invertierung der
Tastenfarbe bei Berührung der Taste.


Verhalten kann inviduell ein- und ausgeschaltet werden
mit Hilfe der folgenden Funktion:

void TFT_touch_key_feedback(int beep, int invert);

