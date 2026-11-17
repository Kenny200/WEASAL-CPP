#include <iostream>
#include <random>
#include <string>
#include <vector>

using namespace std;
const string final_word = "METHINKS_IT_IS_LIKE_A_WEASEL";
const int max_offspring = 1000;
const int probability = 100;
const int MAX_NUMS = 100;

string generate_word(size_t length){
    const string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_";
    
    static random_device rd;
    static mt19937 rng(rd());
    uniform_int_distribution<size_t> dist(0, alphabet.size() - 1);

    string result;
    result.reserve(length);

    for (size_t i = 0; i < length; ++i) {
        result += alphabet[dist(rng)];
    }

    return result;
};
char generate_char(){
    const string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_";

    static random_device rd;
    static mt19937 rng(rd());
    uniform_int_distribution<size_t> dist(0, alphabet.size() - 1);

    return alphabet[dist(rng)];
};
string mutate(string){
    vector<char> mychars = {};
    string result;
    for (char mychar : string) {
        if (dist(rng) <= 95){
            chars.push_back(char);
        } else {
            chars.push_back(generate_char());
        }
    }
    return result 


};
//void create_offspring(parent);
//void fitness(child);
//void score_offspring(offspring);


int main(){
    
    string adam = generate_word(28);
    int my_generation = 0;
    char cain = generate_char();
    cout << adam << " " << cain << endl;

    while(adam != final_word){
        my_generation += 1;
        cout << my_generation;
    }

    return 0;

}
