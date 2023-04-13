#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // Open the file for binary input
    ifstream myfile("Letitbe_sample.wav", ios::in | ios::binary);

    // Check if file was successfully opened
    if (!myfile)
    {
        cout << "Cannot read example.wav\n";
        return 666;
    }

    // Read the WAV file header
    char header[44];
    myfile.read(header, 44);

    unsigned int* SampleRate;
    SampleRate = (unsigned int*)(header + 24);

    myfile.seekg(SampleRate[0] * 10);   // 10초 뒤쪽으로 이동 

    // Read the 1000 samples of the WAV file
    short data[1000];
    myfile.read((char*)data, 1000);

    if (header[22] == 2) {
        ofstream aaa("data.txt");
        float dt = 1.0 / *SampleRate;
        for (int i = 0; i < 500; i++) {
           aaa << i * dt << " " << data[i * 2] << " " << data[i * 2 + 1] << endl;
        }
    }

    // If the file is mono, output the data for the single channel
    else {
        ofstream aaa("data.txt");
        float dt = 1.0 / *SampleRate;
        for (int i = 0; i < 1000; i++) {
            aaa << i * dt << " " << data[i] << endl;
        }
    }
    
    // Close the file
    myfile.close();

    return 0;
}
