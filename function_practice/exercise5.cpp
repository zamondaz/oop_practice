Siha[] aa;
void setup() {
    size(600, 300);
    aa = new Siha[10];
    for (int i = 0; i < 10; i++) {
        aa[i] = new Siha(random(width), random(height), 50 + 10 * i);
        aa[i].Life();
    }
}
void draw() {
    background(0, 255, 255);
    for (int i = 0; i < 10; i++) {
        aa[i].act();
        aa[i].Life();
    }
}
class Siha {
    Siha() {   };
    Siha(float p, float q, float r) {
        x = p;     y = q;     d = r;
        vx = random(-3, 3); vy = random(-2, 2);
    }
    float x, y, d, vx, vy;
    void act() {
        x += vx;  y += vy;
        if (x > width) vx = -vx;
        if (x < 0) vx = -vx;
        if (y > height) vy = -vy;
        if (y < 0) vy = -vy;
    }
    void Life() {
        ellipse(x, y, d, d / 3 * 2);
        circle(x - d / 5, y - d / 6, d / 5);
        arc(x + d / 5, y - d / 6, d / 5, d / 5, PI, 2 * PI);
        arc(x, y, d * 2 / 3, d / 5, 0, PI);
    }
}