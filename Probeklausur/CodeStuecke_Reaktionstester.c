/*************************************************************
 *
 * Codestuecke zu AUFGABE 3
 *
 *************************************************************/

/**
 * @brief  Diese Funktion initialisiert die verwendeten GPIOs 
 *         (falls notwendig)
 * @param  None
 * @retval None
 */
void initGpio(void);

/**
 * @brief  Diese Funktion setzt die 8 blauen LEDs, die an PG8 bis PG15
           angeschlossen sind.
 * @param  value Bitmaske mit den Werten der LEDs.
 * @retval None
 */
void setBlueLeds(unsigned char value);

/**
 * @brief  Die Funktion überprüft, ob S7 gedrueckt ist.
 * @param  NONE
 * @retval Der Return Wert ist 0 genau dann wenn S7 nicht gedrückt ist.
 */
unsigned char buttonPressed(void);


/**
 * @brief  Testfunktion Aufgabe 3
 * @param  NONE
 * @retval NONE
 */

#include "TI_Lib.h"
void testGpio(void) {
   uint8_t v = 0xFF;
   while (1) {
      setBlueLeds(v);
      Delay(1000);
      v = v << 1;
      if (buttonPressed()) {
         v = 0xFF;
      }
   }
}


/*************************************************************
 *
 * Codestuecke zu AUFGABE 4
 *
 *************************************************************/

/**
 * @brief  Diese Funktion initialisiert das TFT Display und setzt
 *         das Ausgabefenster.
 * @param  None
 * @retval None
 */
void initDisplay(void);

/**
 * @brief  Diese Funktion loescht das Display und gibt den als 
 *         Parameter übergebenen String aus.
 * @param  str Der String, der ausgegeben werden soll.
 * @retval None
 */
void printStr(char * str);

/**
 * @brief  Diese Funktion loescht das Display und gibt den die
 *         Reaktionszeit zusammen mit einen passende Text auf 
 *         auf dem Display aus.
 * @param  time Reaktionszeit in Mikrosekunden
 * @retval None
 */
void printReactionTime(int time);

/**
 * @brief  Testfunktion Aufgabe 4
 * @param  NONE
 * @retval NONE
 */
void testTFT(void) {
   while (1) {
      printStr("Aufgabe 4 geschafft!!\n");   Delay(2000);
      printReactionTime(0);                  Delay(2000);
      printReactionTime(-10);                Delay(2000);
      printReactionTime(123000);             Delay(2000);
   }
}


/*************************************************************
 *
 * Codestuecke zu AUFGABE 5
 *
 *************************************************************/

#include <stdint.h>
/**
 * @brief  Diese Funktion initialisiert das Timer-Modul
 * @param  None
 * @retval None
 */
void initTimer(void);

/**
 * @brief  Diese Funktion liefert einen TimeStamp
 *         84 Timer Ticks entsprechen 1 us
 * @param  None
 * @retval Aktuelle TimeStamp
 */
uint32_t getTimeStamp(void);

/**
 * @brief  Diese Funktion berechnet die Zeitspanne zwischen zwei
 *         Time Stamps
 * @param  firstTimeStamp ist der erste (frühere) Zeitstempel
 * @param  secondTimeStamp ist der zweite (spätere) Zeitstempel
 * @retval Die Zeit (in us), die zwischen den beiden Zeitstempeln
 *         vergangen ist.
 */
uint32_t timerDiffToUsec(uint32_t firstTS, uint32_t secondTS);

/*
 * Diese Codesequenz initialisiert den Timer:
 */
RCC->APB1ENR |= RCC_APB1ENR_TIM2EN; /* Takt fuer Timer 2 einschalten */
TIM2->CR1 = 0;                      /* Timer disabled                */
TIM2->CR2 = 0;                      /*                               */
TIM2->PSC = 0;                      /* Prescaler   (84MHz)           */
TIM2->ARR = 0xffffffff;             /* Auto reload register          */
TIM2->DIER  = 0;                    /* Interrupt ausschalten         */
TIM2->CR1 = TIM_CR1_CEN;            /* Enable Timer                  */

/*
 * Diese Codesequenz liefert den aktuellen TimeStamp:
 */

TIM2->CNT

/**
 * @brief  Testfunktion Aufgabe 5
 * @param  NONE
 * @retval NONE
 */
void testTimer(void) {
   uint32_t t;
   while (1) {
      t = getTimeStamp();
      Delay(3000);
      printReactionTime(timerDiffToUsec(t, getTimeStamp()));
      Delay(8000);
   }
}


/*************************************************************
 *
 * Codestuecke zu AUFGABE 6
 *
 *************************************************************/

// Keine Codesequenzen

// EOF
