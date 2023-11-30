#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <math.h>

#include "cerchio.h"

int main()
{
    /** IMPORTANTE */
    /* NON MODIFICARE IL CONTENUTO DI QUESTO FILE!!! */

    int n_punti_test = 0;

    /** Test funzione calcola_area_cerchio */
    {
        float r, area;

        // Test
        r = 10.0F;
        area = calcola_area_cerchio(r);
        printf("L'area del cerchio di raggio %0.3f e': %0.4f m/s\n", r, area);
        assert((area > 314.159F - 0.01F) && (area < 314.159F + 0.01F));
        n_punti_test += 1;
        printf("Hai completato %d punti\n", n_punti_test);
        printf("\n");

        // Test
        r = 58.0F;
        area = calcola_area_cerchio(r);
        printf("L'area del cerchio di raggio %0.3f e': %0.4f m/s\n", r, area);
        assert((area > 10566.0F - 4.0F) && (area < 10566.0F + 4.0F));
        n_punti_test += 1;
        printf("Hai completato %d punti\n", n_punti_test);
        printf("\n");

        // Test
        r = 0.0F;
        area = calcola_area_cerchio(r);
        printf("L'area del cerchio di raggio %0.3f e': %0.4f m/s\n", r, area);
        assert(area == 0.0F);
        n_punti_test += 1;
        printf("Hai completato %d punti\n", n_punti_test);
        printf("\n");

        // Test
        r = -10.0F;
        area = calcola_area_cerchio(r);
        printf("L'area del cerchio di raggio %0.3f e': %0.4f m/s\n", r, area);
        assert(area == 0.0F);
        n_punti_test += 1;
        printf("Hai completato %d punti\n", n_punti_test);
        printf("\n");

        // Test
        r = INFINITY;
        area = calcola_area_cerchio(r);
        printf("L'area del cerchio di raggio %0.3f e': %0.4f m/s\n", r, area);
        assert(isinf(area));
        n_punti_test += 1;
        printf("Hai completato %d punti\n", n_punti_test);
        printf("\n");

        // Test
        r = -INFINITY;
        area = calcola_area_cerchio(r);
        printf("L'area del cerchio di raggio %0.3f e': %0.4f m/s\n", r, area);
        assert(area == 0.0F);
        n_punti_test += 1;
        printf("Hai completato %d punti\n", n_punti_test);
        printf("\n");
    }

    /** Test funzione calcola_arco_circonferenza*/
    {
        float r, alpha, l;

        r = 10;
        alpha = 90;
        l = calcola_arco_circonferenza(r, alpha);
        printf("La lunghezza dell'arco di circonferenza con raggio r %0.3f ed alpha %0.3F e': %0.4f m/s\n", r, alpha, l);
        assert( (l > 15.708F - 0.01) && (l < 15.708F + 0.01) );
        n_punti_test += 1;
        printf("Hai completato %d punti\n", n_punti_test);
        printf("\n");

        r = 20;
        alpha = 200;
        l = calcola_arco_circonferenza(r, alpha);
        printf("La lunghezza dell'arco di circonferenza con raggio r %0.3f ed alpha %0.3F e': %0.4f m/s\n", r, alpha, l);
        assert( (l > 69.813F - 0.01) && (l < 69.813F + 0.01) );
        n_punti_test += 1;
        printf("Hai completato %d punti\n", n_punti_test);
        printf("\n");

        r = 20;
        alpha = 200;
        l = calcola_arco_circonferenza(r, alpha);
        printf("La lunghezza dell'arco di circonferenza con raggio r %0.3f ed alpha %0.3F e': %0.4f m/s\n", r, alpha, l);
        assert( (l > 69.813F - 0.01) && (l < 69.813F + 0.01) );
        n_punti_test += 1;
        printf("Hai completato %d punti\n", n_punti_test);
        printf("\n");

        r = 20;
        alpha = -200;
        l = calcola_arco_circonferenza(r, alpha);
        printf("La lunghezza dell'arco di circonferenza con raggio r %0.3f ed alpha %0.3F e': %0.4f m/s\n", r, alpha, l);
        assert( (l > 69.813F - 0.01) && (l < 69.813F + 0.01) );
        n_punti_test += 1;
        printf("Hai completato %d punti\n", n_punti_test);
        printf("\n");

        r = 30;
        alpha = 400;
        l = calcola_arco_circonferenza(r, alpha);
        printf("La lunghezza dell'arco di circonferenza con raggio r %0.3f ed alpha %0.3F e': %0.4f m/s\n", r, alpha, l);
        assert( (l > 188.496F - 0.01) && (l < 188.496F + 0.01) );
        n_punti_test += 1;
        printf("Hai completato %d punti\n", n_punti_test);
        printf("\n");

        r = 30;
        alpha = -7000;
        l = calcola_arco_circonferenza(r, alpha);
        printf("La lunghezza dell'arco di circonferenza con raggio r %0.3f ed alpha %0.3F e': %0.4f m/s\n", r, alpha, l);
        assert( (l > 188.496F - 0.01) && (l < 188.496F + 0.01) );
        n_punti_test += 1;
        printf("Hai completato %d punti\n", n_punti_test);
        printf("\n");
    }

    /** Test funzione plot */
    // PUNTO BONUS!!!
    plot_circonferenza(20, 80);

    printf("Tutti i test sono andati a buon fine\n");
    printf("Punteggio finale: %d/%d\n", n_punti_test, n_punti_test);
    printf("Per il punto bonus: correzione manuale del professore\n");
    return n_punti_test;
}