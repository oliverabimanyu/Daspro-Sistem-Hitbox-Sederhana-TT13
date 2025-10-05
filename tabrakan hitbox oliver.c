#include <stdio.h>

typedef struct {
    float x, y;
} Hitbox;

int tabrakan(Hitbox *a, Hitbox *b) {
    return (a->x == b->x && a->y == b->y);
}

int main() {
    Hitbox player, musuh;
    Hitbox *p = &player;
    Hitbox *m = &musuh;
    
    printf("Posisi player (x y): ");
    scanf("%f %f", &p->x, &p->y);
    
    printf("Posisi musuh (x y): ");
    scanf("%f %f", &m->x, &m->y);
    
    if(tabrakan(p, m)) {
        printf("Tabrakan!\n");
    } else {
        printf("Tidak tabrakan\n");
    }
    
    return 0;
}