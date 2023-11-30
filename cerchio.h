#ifndef _CERCHIO_H_
#define _CERCHIO_H_

#include <stdbool.h>

/** @brief Calcola l'area del cerchio dato il raggio.
 *
 * Vincoli: il raggio deve essere sempre maggiore di 0, altrimenti la funzione ritorna 0.
 *
 * @param r il raggio del cerchio
 * @return area del cerchio
 */
float calcola_area_cerchio(float r);

/** @brief Calcola la lunghezza di un arco di circonferenza.

 Calcola la lunghezza di un arco di circonferenza dato il raggio e l'angolo sotteso dall'arco.

 Vincoli: il raggio deve essere maggiore di zero, ma l'angolo può essere anche negativo.
 Se il raggio è negativo, la funzione ritorna 0.
 Se l'angolo è negativo, la lunghezza dell' restituita arco deve essere comunque positiva.
 Se l'angolo è maggiore di 360 gradi (o minore di -360 gradi), la lunghezza dell'arco deve essere pari alla circonferenza.

 @param r il raggio del cerchio
 @param alpha l'angolo sotteso dall'arco, in gradi

 @return la lunghezza dell'arco, sempre positiva
*/
float calcola_arco_circonferenza(float r, float alpha);

/** @brief Stampa la lunghezza di circonferenze comprese tra due raggi.

  Stampa la lunghezza delle circonferenze di raggio comprese tra r_min ed r_max.
  La funzione stampa sempre 11 valori, distribuiti ad intervalli regolari fra i due estremi, che devono essere compresi.
  Ad esempio, se r_min = 10 e r_max = 30, stamperà i valori per 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30.
  Nota: i valori sono stampati come tabella; la prima riga è una intestazione della tabella; i valori sono separati da virgola;
  le stampe hanno sempre 3 cifre decimali.

  @param r_min il raggio della circonferenza più piccola
  @param r_min il raggio della circonferenza più grande
  @return void
 */
void plot_circonferenza(float r_min, float r_max);

#endif /* _CERCHIO_H_ */