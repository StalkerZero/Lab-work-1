#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Pokemon{
private:
    string name="0";
    int HP=0;
    int attack=0;
    int defense=0;
    int speed=0;
    string file_name="Pokemon";
  public:
    Pokemon(){}
    Pokemon(string n, int hp, int att, int def, int sp){name=n; HP=hp; attack=att; defense=def; speed=sp; cout << "Constructing Pokemon with firstname - " << name << " and lastname - " << HP << " and attack - " << attack << " and defense - " << defense << " and speedword - " << speed << endl;}

    void set_name(string n){name=n;}
    void set_HP(int hp){HP=hp;}
    void set_attack(int att){attack=att;}
    void set_defense(int def){defense=def;}
    void set_speed(int sp){speed=sp;}

    void get_name(){cout << "Pokemon's name is " << name << endl;}
    void get_HP(){cout << "Pokemon's HP = " << HP << endl;}
    void get_attack(){cout << "Pokemon's attack = " << attack << endl;}
    void get_defense(){cout << "Pokemon's defense = " << defense << endl;}
    void get_speed(){cout << "Pokemon's speed = " << speed << endl;}

    void safe(){
      ifstream myfile1;
      ofstream myfile;
      cout << "Enter file name ";
      cin >> file_name;
      myfile.open (file_name);
      myfile << "Pokemon's name is " << name << "\n";
      myfile << "Pokemon's HP = " << HP << "\n";
      myfile << "Pokemon's attack = " << attack << "\n";
      myfile << "Pokemon's defense = " << defense << "\n";
      myfile << "Pokemon's speed = " << speed << endl;
      myfile.close();
      myfile1.open (file_name);
      char c;
      while(myfile1.get(c)){cout << c;}
    }
    string get_fn(){return file_name;}
};

class Electro : public Pokemon{
private:
  string spec_att="No";
  string spec_def="No";
public:
  void set_spec_att(string sa){spec_att=sa;}
  void set_spec_def(string sd){spec_def=sd;}

  void get_spec_att(){cout << "Electro's special attack is " << spec_att << endl;}
  void get_spec_def(){cout << "Electro's special defense is " << spec_def << endl;}

  void safe(){
    Pokemon::safe();
    string file=get_fn();
    ofstream myfile;
    myfile.open (file, ofstream::app);
    myfile << "Pokemon's special attack is " << spec_att << "\n";
    myfile << "Pokemon's special defense is " << spec_def << endl;
    myfile.close();
    ifstream myfile1;
    myfile1.open (file);
    char c;
    while(myfile1.get(c)){cout << c;}
  }
};

class Earth : public Pokemon{
private:
  string spec_att="0";
  string spec_def="0";
public:
  void set_spec_att(string sa){spec_att=sa;}
  void set_spec_def(string sd){spec_def=sd;}

  void get_spec_att(){cout << "Earth's special attack is " << spec_att << endl;}
  void get_spec_def(){cout << "Earth's special defense is " << spec_def << endl;}

  void safe(){
    Pokemon::safe();
    string file=get_fn();
    ofstream myfile;
    myfile.open (file, ofstream::app);
    myfile << "Pokemon's special attack is " << spec_att << "\n";
    myfile << "Pokemon's special defense is " << spec_def << endl;
    myfile.close();
    ifstream myfile1;
    myfile1.open (file);
    char c;
    while(myfile1.get(c)){cout << c;}
  }
};

class Water : public Pokemon{
private:
  string spec_att="0";
  string spec_def="0";
public:
  void set_spec_att(string sa){spec_att=sa;}
  void set_spec_def(string sd){spec_def=sd;}

  void get_spec_att(){cout << "Water's special attack is " << spec_att << endl;}
  void get_spec_def(){cout << "Water's special defense is " << spec_def << endl;}

  void safe(){
    Pokemon::safe();
    string file=get_fn();
    ofstream myfile;
    myfile.open (file, ofstream::app);
    myfile << "Pokemon's special attack is " << spec_att << "\n";
    myfile << "Pokemon's special defense is " << spec_def << endl;
    myfile.close();
    ifstream myfile1;
    myfile1.open (file);
    char c;
    while(myfile1.get(c)){cout << c;}
  }
};

int main(){
Electro U1;
int s2, s3, s4, s5;
string s1, s6, s7;
cout << "Enter name ";
cin >> s1;
U1.set_name(s1);
cout << "Enter HP ";
cin >> s2;
U1.set_HP(s2);
cout << "Enter attack ";
cin >> s3;
U1.set_attack(s3);
cout << "Enter defense ";
cin >> s4;
U1.set_defense(s4);
cout << "Enter speed ";
cin >> s5;
U1.set_speed(s5);
cout << "Enter special attack ";
cin >> s6;
U1.set_spec_att(s6);
cout << "Enter special defense ";
cin >> s7;
U1.set_spec_def(s7);
U1.safe();

return 0;
}
