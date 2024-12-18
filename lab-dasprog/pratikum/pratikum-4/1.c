#include <stdio.h>

struct pokemon_trainer
{
    char namaTrainer[50];
    char namaPokemon[50];
    int hp;
    int attack;
    int defense;
    int speed;
};

int average(struct pokemon_trainer pokemons) {
    return (pokemons.hp + pokemons.attack + pokemons.defense + pokemons.speed) / 4;
}


int main() {
    int n;
    scanf("%d", &n);

    struct pokemon_trainer pokemons[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %s %d %d %d", pokemons[i].namaTrainer, pokemons[i].namaPokemon, &pokemons[i].hp, &pokemons[i].attack, &pokemons[i].defense);
        scanf("%d", &pokemons[i].speed);
    }
    
    int avg = average(pokemons[0]);
    int pi = 0;

    for(int i = 0; i < n; i++){
        if(average(pokemons[i]) > avg){
            avg = average(pokemons[i]);
            pi = i;
        }
    }

    // Kyogre wins! Furina said ez
    printf("%s wins! %s said ez\n",pokemons[pi].namaPokemon,pokemons[pi].namaTrainer);
    return 0;
}