Siha[] aa;
void setup() {
    size(600, 300);
    aa = new Siha[50];
    for (int i = 0; i < 50; i++) {
        aa[i] = new Siha(random(600), random(300), random(50, 100));
        aa[i].Life();
    }
}

class Siha {
    Siha() {   };
    Siha(float p, float q, float r) {
        x = p;     y = q;     d = r;
    }
    float x, y, d;
    void Life() {
        ellipse(x, y, d, d / 3 * 2);
        circle(x - d / 5, y - d / 6, d / 5);
        arc(x + d / 5, y - d / 6, d / 5, d / 5, PI, 2 * PI);
        arc(x, y, d * 2 / 3, d / 5, 0, PI);
    }
}