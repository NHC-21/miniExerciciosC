#include <stdio.h>
#include <stdlib.h>

int main() {
    char valorDigitado;
    char escalaDeTemperatura;
    float resultado;
    printf("Qual o valor que sera digitado? ");
    printf("[ C ] Celsius \n[ F ] Fahrenheit \n[ K ] Kelvin");
    valorDigitado = getchar();

    if (valorDigitado == "C") {
        printf("O valor em celsius sera convertido para qual escala de temperatura? ");
        escalaDeTemperatura = getchar();

        if (escalaDeTemperatura == "F") {
            celParaFah();
        } else if (escalaDeTemperatura == "K") {
            celParaKel();
        }
    } else if (valorDigitado == "F") {
        printf("O valor em fahrenheit sera convertido para qual escala de temperatura? ");
        escalaDeTemperatura = getchar();

        if (escalaDeTemperatura == "C") {
            fahParaCel();
        } else if (escalaDeTemperatura == "K") {
            fahParaKel();
        }
    } else if (valorDigitado == "K") {
        printf("O valor em kelvin sera convertido para qual escala de temperatura? ");
        escalaDeTemperatura = getchar();

        if (escalaDeTemperatura == "F") {
            kelParaFah();
        } else if (escalaDeTemperatura == "C") {
            kelParaCel();
        }
    }
}
