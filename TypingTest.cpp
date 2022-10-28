#include <iostream>
#include <math.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <cstdlib>
#include <fstream>
#include <string>
#include <unistd.h>
#include <time.h>
#include <vector>
#include<chrono> //for sleeping 
#include<thread> // --do--
#include<cstdlib>//for random increments  
#include<ctime>// --do--

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

//buscar como hacer que usuario pueda leerlos
    ifstream myfile1 ("txt1.txt", ios_base::out);
    ifstream myfile2 ("txt2.txt", ios_base::out);
    ifstream myfile3 ("txt3.txt", ios_base::out);
    ifstream myfile4 ("txt4.txt", ios_base::out);
    ifstream myfile5 ("txt5.txt", ios_base::out);
    ifstream myfile6 ("txt6.txt", ios_base::out);
    ifstream myfile7 ("txt7.txt", ios_base::out);
    ifstream myfile8 ("txt8.txt", ios_base::out);
    ifstream myfile9 ("txt9.txt", ios_base::out);
    ifstream myfile10 ("txt10.txt", ios_base::out);
    ifstream myfile11 ("txt11.txt", ios_base::out);
    ifstream myfile12 ("txt12.txt", ios_base::out);
    
    char line1[80] = {0}; //line para leer y guardar el texto de los txt
    char line2[80] = {0};
    char line3[80] = {0};
    char line4[80] = {0};
    char line5[80] = {0};
    char line6[80] = {0};
    char line7[80] = {0};
    char line8[80] = {0};
    char line9[80] = {0};
    char line10[80] = {0};
    char line11[80] = {0};
    char line12[80] = {0};
    char trash[40] = {0}; //leer basura
    char input1[sizeof(line1)] = {0}; //input para guardar el input del usuario
    char input2[sizeof(line2)] = {0};
    char input3[sizeof(line3)] = {0};
    char input4[sizeof(line4)] = {0};
    char input5[sizeof(line5)] = {0};
    char input6[sizeof(line6)] = {0};
    char input7[sizeof(line7)] = {0};
    char input8[sizeof(line8)] = {0};
    char input9[sizeof(line9)] = {0};
    char input10[sizeof(line10)] = {0};
    char input11[sizeof(line11)] = {0};
    char input12[sizeof(line12)] = {0};
    int n = 0;
    int i = 0;
    int x = 1;
    vector<double> porcentaje(12, 0);
    vector<int> tiempo(12, 0);
    double prom = 0;
    string line; //para leer por lineas e elos txt
    int sen = 0; //de apoyo
    int sumOr = 0; // suma de las letras y espacios de cada nivel, para sacar porcentaje
    int suma = 0;
    time_t inicio; // para el temporizador
    time_t fin;
    time_t delta;
    
    void countdown()  { // inicia la cuenta regresiva
        cout << "\n";
        cout << "Instructions: Copy the text given as fast and acurrate as possible, start typing as soon as the countdown ends \n" << endl;
        Sleep(1000);
        cout << "Tip: Each character counts, even the linejumps and the spaces!!! \n" << endl;
        Sleep(3000);
        cout << "Ready? \n" << endl;
        Sleep(3000);
        cout << "Starting in:" << endl;
        Sleep(2000);
        cout << "3" << endl;
        Sleep(1000);
        cout << "2" << endl;
        Sleep(1000);
        cout << "1" << endl;
        Sleep(1000);
        cout << "GOOD LUCK !!! \n \n" << endl;
        //Iniciar
    } 
    
    void loadingBar()
    {
        char a = 177, b = 219;
    
        printf("\n");
        cout << "\n\t\t\t\t\t" <<  "Loading..." << endl;
        printf("\t\t\t\t\t");
    
        // Print initial loading bar
        for (int i = 0; i < 50; i++)
            printf("%c", a);
    
        printf("\r");
        printf("\t\t\t\t\t");
    
        for (int i = 0; i < 50; i++) {
            printf("%c", b);
    
            Sleep(50);
            
        }
    }

    void levelList()
    {
        cout << "------------------------------------------------------------------------------------" << endl;
        cout << "Level list: \n" << endl;
        cout << "   Easy difficulty: " << endl;
        cout << "\t1- Creep \n\t2- Take a chance on me\n\t3- Boulevard of Broken Dreams\n\t4- Lovely \n"<< endl;
        cout << "   Medium difficulty: " << endl;
        cout << "\t5- Round and Round \n\t6- Hey there, Delilah\n\t7- My Tears Ricochet\n\t8- Holding out for a Hero \n"<< endl;
        cout << "   Hard difficulty: " << endl;
        cout << "\t9- Anti-hero \n\t10- My Way Home Is Through You\n\t11-Congratulations\n\t12- The Ballad of Mona Lisa\n" << endl;
        cout << "Type in the number of the level you'd like to play--------> \n" << endl;
    }

    void printLevel(int n)
    {
        switch(n) // muestra el texto del archivo segun elegido.
        {
            case 1:
                sen = 1;
                loadingBar();
                cout << "\n" << endl;
                countdown();
                if (myfile1.is_open())
                {
                    getline(myfile1, line);
                    cout << line << endl; 
                    strcpy(line1, line.c_str());  

                    getline(myfile1, line);
                    cout << line << endl; 
                    strcpy(line2, line.c_str());

                    getline(myfile1, line);
                    cout << line << endl; 
                    strcpy(line3, line.c_str());

                    getline(myfile1, line);
                    cout << line << endl; 
                    strcpy(line4, line.c_str());  
                    myfile1.close();
                }
                myfile1.open("txt1.txt", ios_base::out);
            break;

            case 2:
                sen = 2;
                loadingBar();
                cout << "\n" << endl;
                countdown();
                if (myfile2.is_open())
                {
                    getline(myfile2, line);
                    cout << line << endl; 
                    strcpy(line1, line.c_str());  

                    getline(myfile2, line);
                    cout << line << endl; 
                    strcpy(line2, line.c_str());

                    getline(myfile2, line);
                    cout << line << endl; 
                    strcpy(line3, line.c_str());

                    getline(myfile2, line);
                    cout << line << endl; 
                    strcpy(line4, line.c_str());  
                    myfile2.close();
                }
                myfile2.open("txt2.txt", ios_base::out);
            break;

            case 3:
                sen = 3;
                loadingBar();
                cout << "\n" << endl;
                countdown();
                if (myfile3.is_open())
                {
                    getline(myfile3, line);
                    cout << line << endl; 
                    strcpy(line1, line.c_str());  

                    getline(myfile3, line);
                    cout << line << endl; 
                    strcpy(line2, line.c_str());

                    getline(myfile3, line);
                    cout << line << endl; 
                    strcpy(line3, line.c_str());

                    getline(myfile3, line);
                    cout << line << endl; 
                    strcpy(line4, line.c_str());  
                    myfile3.close();
                }
                myfile3.open("txt3.txt", ios_base::out);
            break;

            case 4:
                sen = 4;
                loadingBar();
                cout << "\n" << endl;
                countdown();
                if (myfile4.is_open())
                {
                    getline(myfile4, line);
                    cout << line << endl; 
                    strcpy(line1, line.c_str());  

                    getline(myfile4, line);
                    cout << line << endl; 
                    strcpy(line2, line.c_str());

                    getline(myfile4, line);
                    cout << line << endl; 
                    strcpy(line3, line.c_str());

                    getline(myfile4, line);
                    cout << line << endl; 
                    strcpy(line4, line.c_str());  
                    myfile4.close();
                }
                myfile4.open("txt4.txt", ios_base::out);
            break;

            case 5:
                sen = 5;
                loadingBar();
                cout << "\n" << endl;
                countdown();
                if (myfile5.is_open())
                {
                    getline(myfile5, line);
                    cout << line << endl; 
                    strcpy(line1, line.c_str());  

                    getline(myfile5, line);
                    cout << line << endl; 
                    strcpy(line2, line.c_str());

                    getline(myfile5, line);
                    cout << line << endl; 
                    strcpy(line3, line.c_str());

                    getline(myfile5, line);
                    cout << line << endl; 
                    strcpy(line4, line.c_str());  

                    getline(myfile5, line);
                    cout << line << endl; 
                    strcpy(line5, line.c_str());

                    getline(myfile5, line);
                    cout << line << endl; 
                    strcpy(line6, line.c_str());
                    myfile5.close();
                }
                myfile5.open("txt5.txt", ios_base::out);
            break;

            case 6:
                sen = 6;
                loadingBar();
                cout << "\n" << endl;
                countdown();
                if (myfile6.is_open())
                {
                    getline(myfile6, line);
                    cout << line << endl; 
                    strcpy(line1, line.c_str());  

                    getline(myfile6, line);
                    cout << line << endl; 
                    strcpy(line2, line.c_str());

                    getline(myfile6, line);
                    cout << line << endl; 
                    strcpy(line3, line.c_str());

                    getline(myfile6, line);
                    cout << line << endl; 
                    strcpy(line4, line.c_str());  

                    getline(myfile6, line);
                    cout << line << endl; 
                    strcpy(line5, line.c_str());

                    getline(myfile6, line);
                    cout << line << endl; 
                    strcpy(line6, line.c_str());
                    myfile6.close();
                }
                myfile6.open("txt6.txt", ios_base::out);
            break;
                        
            case 7:
                sen = 7;
                loadingBar();
                cout << "\n" << endl;
                countdown();
                if (myfile7.is_open())
                {
                    getline(myfile7, line);
                    cout << line << endl; 
                    strcpy(line1, line.c_str());  

                    getline(myfile7, line);
                    cout << line << endl; 
                    strcpy(line2, line.c_str());

                    getline(myfile7, line);
                    cout << line << endl; 
                    strcpy(line3, line.c_str());

                    getline(myfile7, line);
                    cout << line << endl; 
                    strcpy(line4, line.c_str());  

                    getline(myfile7, line);
                    cout << line << endl; 
                    strcpy(line5, line.c_str());

                    getline(myfile7, line);
                    cout << line << endl; 
                    strcpy(line6, line.c_str());
                    myfile7.close();
                }
                myfile7.open("txt7.txt", ios_base::out);
            break;

            case 8:
                sen = 8;
                loadingBar();
                cout << "\n" << endl;
                countdown();
                if (myfile8.is_open())
                {
                    getline(myfile8, line);
                    cout << line << endl; 
                    strcpy(line1, line.c_str());  

                    getline(myfile8, line);
                    cout << line << endl; 
                    strcpy(line2, line.c_str());

                    getline(myfile8, line);
                    cout << line << endl; 
                    strcpy(line3, line.c_str());

                    getline(myfile8, line);
                    cout << line << endl; 
                    strcpy(line4, line.c_str());  

                    getline(myfile8, line);
                    cout << line << endl; 
                    strcpy(line5, line.c_str());

                    getline(myfile8, line);
                    cout << line << endl; 
                    strcpy(line6, line.c_str());
                    myfile8.close();
                }
                myfile8.open("txt8.txt", ios_base::out);
            break;

            case 9:
                sen = 9;
                loadingBar();
                cout << "\n" << endl;
                countdown();
                if (myfile9.is_open())
                {
                    getline(myfile9, line);
                    cout << line << endl; 
                    strcpy(line1, line.c_str());  

                    getline(myfile9, line);
                    cout << line << endl; 
                    strcpy(line2, line.c_str());

                    getline(myfile9, line);
                    cout << line << endl; 
                    strcpy(line3, line.c_str());

                    getline(myfile9, line);
                    cout << line << endl; 
                    strcpy(line4, line.c_str());  

                    getline(myfile9, line);
                    cout << line << endl; 
                    strcpy(line5, line.c_str());

                    getline(myfile9, line);
                    cout << line << endl; 
                    strcpy(line6, line.c_str());

                    getline(myfile9, line);
                    cout << line << endl; 
                    strcpy(line7, line.c_str());

                    getline(myfile9, line);
                    cout << line << endl; 
                    strcpy(line8, line.c_str());
                    myfile9.close();
                }
                myfile9.open("txt9.txt", ios_base::out);
            break;

            case 10:
                sen = 10;
                loadingBar();
                cout << "\n" << endl;
                countdown();
                if (myfile10.is_open())
                {
                    getline(myfile10, line);
                    cout << line << endl; 
                    strcpy(line1, line.c_str());  

                    getline(myfile10, line);
                    cout << line << endl; 
                    strcpy(line2, line.c_str());

                    getline(myfile10, line);
                    cout << line << endl; 
                    strcpy(line3, line.c_str());

                    getline(myfile10, line);
                    cout << line << endl; 
                    strcpy(line4, line.c_str());  

                    getline(myfile10, line);
                    cout << line << endl; 
                    strcpy(line5, line.c_str());

                    getline(myfile10, line);
                    cout << line << endl; 
                    strcpy(line6, line.c_str());

                    getline(myfile10, line);
                    cout << line << endl; 
                    strcpy(line7, line.c_str());

                    getline(myfile10, line);
                    cout << line << endl; 
                    strcpy(line8, line.c_str());
                    myfile10.close();
                }
                myfile10.open("txt10.txt", ios_base::out);
            break;

            case 11:
                sen = 11;
                loadingBar();
                cout << "\n" << endl;
                countdown();
                if (myfile11.is_open())
                {
                    getline(myfile11, line);
                    cout << line << endl; 
                    strcpy(line1, line.c_str());  

                    getline(myfile11, line);
                    cout << line << endl; 
                    strcpy(line2, line.c_str());

                    getline(myfile11, line);
                    cout << line << endl; 
                    strcpy(line3, line.c_str());

                    getline(myfile11, line);
                    cout << line << endl; 
                    strcpy(line4, line.c_str());  

                    getline(myfile11, line);
                    cout << line << endl; 
                    strcpy(line5, line.c_str());

                    getline(myfile11, line);
                    cout << line << endl; 
                    strcpy(line6, line.c_str());

                    getline(myfile11, line);
                    cout << line << endl; 
                    strcpy(line7, line.c_str());

                    getline(myfile11, line);
                    cout << line << endl; 
                    strcpy(line8, line.c_str());
                    myfile11.close();
                }
                myfile11.open("txt11.txt", ios_base::out);
            break;

            case 12:
                sen = 12;
                loadingBar();
                cout << "\n" << endl;
                countdown();
                if (myfile12.is_open())
                {
                    getline(myfile12, line);
                    cout << line << endl; 
                    strcpy(line1, line.c_str());  

                    getline(myfile12, line);
                    cout << line << endl; 
                    strcpy(line2, line.c_str());

                    getline(myfile12, line);
                    cout << line << endl; 
                    strcpy(line3, line.c_str());

                    getline(myfile12, line);
                    cout << line << endl; 
                    strcpy(line4, line.c_str());  

                    getline(myfile12, line);
                    cout << line << endl; 
                    strcpy(line5, line.c_str());

                    getline(myfile12, line);
                    cout << line << endl; 
                    strcpy(line6, line.c_str());

                    getline(myfile12, line);
                    cout << line << endl; 
                    strcpy(line7, line.c_str());

                    getline(myfile12, line);
                    cout << line << endl; 
                    strcpy(line8, line.c_str());
                    myfile12.close();
                }
                myfile12.open("txt12.txt", ios_base::out);
            break;

            default:
                throw invalid_argument("Not valid input, program terminated"); //lee si es un numero invalido o un caracter no valido
        }
        cout<< "\n" << endl;
}

    void leer()
    {
        cin.getline(trash,40); //lee basura
                    
        if(sen>0 && sen<=4) //lee un numero de lineas establecido
        {
            cin.getline(input1,sizeof(line1));
            cin.getline(input2,sizeof(line2));
            cin.getline(input3,sizeof(line3));
            cin.getline(input4,sizeof(line4));
        }

        else if(sen>4 && sen<=8)
        {
            cin.getline(input1,sizeof(line1));
            cin.getline(input2,sizeof(line2));
            cin.getline(input3,sizeof(line3));
            cin.getline(input4,sizeof(line4));
            cin.getline(input5,sizeof(line5));
            cin.getline(input6,sizeof(line6));
        }

        else if(sen>8 && sen<=12)
        {    
            cin.getline(input1,sizeof(line1));
            cin.getline(input2,sizeof(line2));
            cin.getline(input3,sizeof(line3));
            cin.getline(input4,sizeof(line4));
            cin.getline(input5,sizeof(line5));
            cin.getline(input6,sizeof(line6));
            cin.getline(input7,sizeof(line7));
            cin.getline(input8,sizeof(line8));
        }

        cout<< "\n" << endl;
        cout << "END" << endl;
    }

    void imprimir()
    {
        if(sen<=4)
        {
            cout << input1 << endl;
            cout << input2 << endl;
            cout << input3 << endl;
            cout << input4 << endl;
        }

        else if(sen>4 && sen <=8)
        {
            cout << input1 << endl;
            cout << input2 << endl;
            cout << input3 << endl;
            cout << input4 << endl;
            cout << input5 << endl;
            cout << input6 << endl;
        }

        else if(sen>8 && sen <=12)
        {
            cout << input1 << endl;
            cout << input2 << endl;
            cout << input3 << endl;
            cout << input4 << endl;
            cout << input5 << endl;
            cout << input6 << endl;
            cout << input7 << endl;
            cout << input8 << endl;
        }
    }

    void beginMenu()
    {
        cout << "Options: " << endl;
        cout <<"\n" << endl;
        cout << "1. Choose level" << "\n" << "2. See best scores" << "\n" << "3. Leave Program" << endl;
        cout <<"\n" << endl;
        cout << "Type in according to the option you'd like to pick: " << endl;
        cin >> x; 
        Sleep(2000);
        cout <<"\n" << endl;
    }


int main()  {
    system("color 0A");
    cout << "\n" << endl;
    cout << "           Welcome to 'Typing Test' \n" << endl; //menu
    Sleep(3000);
    cout << "           Made by Roberto Bollain \n" << endl;
    Sleep(3000);

        while(x != 3)
        {
            beginMenu();
            switch(x)
            { 
                case 1: 
                    levelList(); //muestra lista de niveles
                    cin >> n;
                    printLevel(n); //imprime el texto del nivel
                    inicio = time(NULL); //Inicia temporizador
                    sleep(1);// 1 segundo

                    leer(); //lee input del usuario
                    
                    fin = time(NULL); //acabar temporizador
                    cout << "\n" << endl;
                    //Sleep(2000);
                    cout<< "User's input: " << endl;
                    //Sleep(2300);
                    cout << "\n" << endl;
                    
                    imprimir();//muestra el input del usuario
                    delta = fin - inicio;
                    
                    //para medir las letras que tuvo correctas el usuario, contando espacios y saltos de linea
                    if(sen>0 && sen<=4)
                    {
                        for(int i=0; i<sizeof(line1); i++)
                            if(line1[i]==input1[i])
                                suma++;
                        for( int i=0; i<sizeof(line2); i++)       
                            if(line2[i]==input2[i])
                                suma++;
                        for( int i=0; i<sizeof(line3); i++)       
                            if(line3[i]==input3[i])
                                suma++;
                        for( int i=0; i<sizeof(line4); i++)       
                            if(line4[i]==input4[i])
                                suma++;
                    }

                    if(sen>4 && sen<=8)
                    {
                        for(int i=0; i<sizeof(line1); i++)
                            if(line1[i]==input1[i])
                                suma++;
                        for( int i=0; i<sizeof(line2); i++)       
                            if(line2[i]==input2[i])
                                suma++;
                        for( int i=0; i<sizeof(line3); i++)       
                            if(line3[i]==input3[i])
                                suma++;
                        for( int i=0; i<sizeof(line4); i++)       
                            if(line4[i]==input4[i])
                                suma++;
                        for( int i=0; i<sizeof(line5); i++)       
                            if(line5[i]==input5[i])
                                suma++;
                        for( int i=0; i<sizeof(line6); i++)       
                            if(line6[i]==input6[i])
                                suma++;
                        
                    }

                    if(sen>8 && sen<=12)
                    {
                        for(int i=0; i<sizeof(line1); i++)
                            if(line1[i]==input1[i])
                                suma++;
                        for( int i=0; i<sizeof(line2); i++)       
                            if(line2[i]==input2[i])
                                suma++;
                        for( int i=0; i<sizeof(line3); i++)       
                            if(line3[i]==input3[i])
                                suma++;
                        for( int i=0; i<sizeof(line4); i++)       
                            if(line4[i]==input4[i])
                                suma++;
                        for( int i=0; i<sizeof(line5); i++)       
                            if(line5[i]==input5[i])
                                suma++;
                        for( int i=0; i<sizeof(line6); i++)       
                            if(line6[i]==input6[i])
                                suma++;
                        for( int i=0; i<sizeof(line7); i++)       
                            if(line7[i]==input7[i])
                                suma++;
                        for( int i=0; i<sizeof(line8); i++)       
                            if(line8[i]==input8[i])
                                suma++;
                    }
                
                    if(sen==1)
                    {
                        suma = suma+94-320;
                        sumOr = 94;
                    }
                    else if(sen==2)
                    {
                        suma = suma+129-320;
                        sumOr = 129;
                    }
                    else if(sen==3)
                    {
                        suma = suma+119 -320;
                        sumOr = 119;
                    }
                    else if(sen==4)
                    {
                        suma = suma+119-320;
                        sumOr = 119;
                    }
                    else if(sen==5)
                    {
                        suma = suma +166 - 480;
                        sumOr = 166;
                    }
                    else if(sen==6)
                    {
                        suma = suma +173 - 480;
                        sumOr = 173;
                    }
                    else if(sen==7)
                    {
                        suma = suma+ 262 -480;
                        sumOr = 262;
                    }
                    else if(sen==8)
                    {
                        suma = suma+258 -480;
                        sumOr = 258;
                    }
                    else if(sen==9)
                    {
                        suma = suma+230-640;
                        sumOr = 230;
                    }
                    else if(sen==10)
                    {
                        suma = suma +219 - 640;
                        sumOr = 219;
                    }
                    else if(sen==11)
                    {
                        suma = suma+330-640;
                        sumOr = 330;
                    }
                    else if(sen==12)
                    {
                        suma = suma+349-640;
                        sumOr = 349;
                    }

                    prom = (suma*100)/sumOr;

                    if(prom<0)
                        prom = 0;
                    
                    cout << "\n" << endl;
                    Sleep(2000);
                    cout << "Acurrracy: ";
                    Sleep(1500);
                    cout << prom << "%" << endl;
                    Sleep(1000);
                    cout << "Time: ";
                    Sleep(1500);
                    cout << delta << " seconds " << endl;
                    cout << "\n" << endl;

                    if(sen==1)
                    {
                        if(porcentaje[0]< prom)
                        {
                            porcentaje[0]=prom;
                            tiempo[0] = delta;
                        }   

                        else if(porcentaje[0]== prom && tiempo[0]>delta)
                            tiempo[0] = delta;
                    }

                    else if(sen==2)
                    {
                        if(porcentaje[1]< prom)
                        {
                            porcentaje[1]=prom;
                            tiempo[1] = delta;
                        }

                        else if(porcentaje[1]== prom && tiempo[1]>delta)
                            tiempo[1] = delta;
                    }

                    else if(sen==3)
                    {
                        if(porcentaje[2]< prom)
                        {
                            porcentaje[2]=prom;
                            tiempo[2] = delta;
                        }

                        else if(porcentaje[2]== prom && tiempo[2]>delta)
                            tiempo[2] = delta;
                    }

                    else if(sen==4)
                    {
                        if(porcentaje[3]< prom)
                        {
                            porcentaje[3]=prom;
                            tiempo[3] = delta;
                        }

                        else if(porcentaje[3]== prom && tiempo[3]>delta)
                            tiempo[3] = delta;
                    }

                    else if(sen==5)
                    {
                        if(porcentaje[4]< prom)
                        {
                            porcentaje[4]=prom;
                            tiempo[4] = delta;
                        }

                        else if(porcentaje[4]== prom && tiempo[4]>delta)
                            tiempo[4] = delta;
                    }

                    else if(sen==6)
                    {
                        if(porcentaje[5]< prom)
                        {
                            porcentaje[5]=prom;
                            tiempo[5] = delta;
                        }

                        else if(porcentaje[5]== prom && tiempo[5]>delta)
                            tiempo[5] = delta;
                    }

                    else if(sen==7)
                    {
                        if(porcentaje[6]< prom)
                        {
                            porcentaje[6]=prom;
                            tiempo[6] = delta;
                        }

                        else if(porcentaje[6]== prom && tiempo[6]>delta)
                            tiempo[6] = delta;
                    }

                    else if(sen==8)
                    {
                        if(porcentaje[7]< prom)
                        {
                            porcentaje[7]=prom;
                            tiempo[7] = delta;
                        }

                        else if(porcentaje[7]== prom && tiempo[7]>delta)
                            tiempo[7] = delta;
                    }

                    else if(sen==9)
                    {
                        if(porcentaje[8]< prom)
                        {
                            porcentaje[8]=prom;
                            tiempo[8] = delta;
                        }

                        else if(porcentaje[8]== prom && tiempo[8]>delta)
                            tiempo[8] = delta;
                    }

                    else if(sen==10)
                    {
                        if(porcentaje[9]< prom)
                        {
                            porcentaje[9]=prom;
                            tiempo[9] = delta;
                        }

                        else if(porcentaje[9]== prom && tiempo[9]>delta)
                            tiempo[9] = delta;
                    }

                    else if(sen==11)
                    {
                        if(porcentaje[10]< prom)
                        {
                            porcentaje[10]=prom;
                            tiempo[10] = delta;
                        }

                        else if(porcentaje[10]== prom && tiempo[10]>delta)
                            tiempo[10] = delta;
                    }

                    else if(sen==12)
                    {
                        if(porcentaje[11]< prom)
                        {
                            porcentaje[11]=prom;
                            tiempo[11] = delta;
                        }

                        else if(porcentaje[11]== prom && tiempo[11]>delta)
                            tiempo[11] = delta;
                    }
                    cout << "------------------------------------------------------------------------------------" << endl;
                    prom = 0;
                    suma = 0;
                    delta = 0;
                    break;

                case 2:
                    cout << "------------------------------------------------------------------------------------" << endl;
                    Sleep(2000);
                    for(int i=0; i<12; i++)
                    {
                        cout << "Level " << i+1 << ": " << endl;
                        cout << "Percentage of acurracy: " << porcentaje[i] << "%" << endl;
                        cout << "Time spent: " << tiempo[i] << " seconds" << endl;
                        cout << "\n" << endl;
                    }

                    cout << "------------------------------------------------------------------------------------" << endl;
                    break;

                case 3:
                    cout << "------------------------------------------------------------------------------------" << endl;
                    Sleep(2000);
                    cout << "Thank you for entering 'Typing Test' made by Roberto Bollain " << endl;

                    cout << "------------------------------------------------------------------------------------" << endl;
                    break;

                default:
                    throw invalid_argument("Not a valid input, program terminated"); // excepcion si no es 1,2 o 3
            }
        }
}