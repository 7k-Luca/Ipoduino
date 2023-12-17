// Riptide by Vance Joy

extern int NOTE_DUR;
void play(int note, int duration);

void Riptide() {
    NOTE_DUR = 58;  // Set tempo to be faster
    play(NOTE_A4, 1);
    play(NOTE_E5, 1);
    play(NOTE_C5, 1);
    play(NOTE_E5, 1);
    play(NOTE_A4, 1);
    play(NOTE_E5, 1);
    play(NOTE_C5, 1);
    play(NOTE_E5, 16); //m2
    delay(NOTE_DUR*6);
    play(NOTE_E5, 6);
    play(NOTE_GS5, 6);
    play(NOTE_A5, 6);
    play(NOTE_B5, 6); //m3
    play(NOTE_CS6, 7);
    play(NOTE_A5, 7);
    play(NOTE_CS6, 8);
    play(NOTE_A5, 8);
    play(NOTE_CS6, 22);
    delay(NOTE_DUR*4);
    play(NOTE_E5, 2); //m4
    play(NOTE_B5, 6);
    play(NOTE_C5, 2);
    play(NOTE_GS5, 6);
    play(NOTE_A4, 2);
    play(NOTE_E5, 4); //m5
    play(NOTE_A4, 2);
    play(NOTE_E5, 4);
    play(NOTE_A4, 2);
    play(NOTE_E5, 4);
    play(NOTE_A4, 2);
    play(NOTE_E5, 2);
    play(NOTE_C5, 2);
    play(NOTE_B5, 2);
    play(NOTE_A5, 2);
    play(NOTE_E5, 2);
    play(NOTE_C5, 2);
    play(NOTE_B5, 4); //m6
    play(NOTE_A4, 2);
    play(NOTE_D5, 4);
    play(NOTE_B5, 2);
    play(NOTE_A4, 4);
    play(NOTE_E5, 4);
    play(NOTE_A4, 2);
    play(NOTE_D5, 2);
    play(NOTE_A5, 2);
    play(NOTE_GS5, 2);
    play(NOTE_E5, 2);
    play(NOTE_C5, 2);
    play(NOTE_D5, 4); //m7
    play(NOTE_GS5, 2);
    play(NOTE_B5, 4);
    play(NOTE_D6, 2);
    play(NOTE_GS5, 4);
    play(NOTE_D6, 4);
    play(NOTE_GS5, 2);
    play(NOTE_B5, 2);
    play(NOTE_D6, 2);
    play(NOTE_CS6, 2);
    play(NOTE_B5, 2);
    play(NOTE_A5, 2);
    play(NOTE_E6, 12); //m8
    delay(NOTE_DUR*2);
    play(NOTE_GS5, 2);
    play(NOTE_B5, 6);
    play(NOTE_C5, 2);
    play(NOTE_GS5, 6);
    play(NOTE_A4, 2);
    play(NOTE_E5, 10); //m9
}
