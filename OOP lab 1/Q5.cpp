#include <iostream>
#include <cstring>
using namespace std; 
int strLen(const char* str) {
	int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}
int Occurrences(const char* str, char ch) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    return count;
}
void extractServices(const char* data, char**& services, int& count) {
    count = Occurrences(data, '@');
    services = new char* [count];
    int index = 0;
    const char* position = strchr(data, '@');
    while (position != nullptr) {
        const char* start = position + 1; 
        const char* end = strchr(start, '.'); 
        if (end != nullptr) {
            int length = end - start; 
            services[index] = new char[length + 1]; 
            for (int i = 0; i < length; i++) {
                services[index][i] = start[i]; 
            }
            services[index][length] = '\0'; 
            index++;
        }

        position = strchr(position + 1, '@'); 
    }
}

    
void printServices(char** services, int serviceCount) {
    for (int i = 0; i < serviceCount; i++) {
        cout << i << " ---> " << services[i] << endl;
    }
}
void freeServices(char**& services, int serviceCount) {
    for (int i = 0; i < serviceCount; i++) {
        delete[] services[i]; 
    }
    delete[] services; 
    services = nullptr;
}
int main() {
    char data[] = "I tried to reach Sarah at her @gmail.com address, but she prefers using her @icloud.com for more privacy, while John sent his update from his @outlook.com account and Jane replied from her @yahoo.com email.";
    char** services = nullptr; 
    int serviceCount = 0; 
    extractServices(data, services, serviceCount);
    printServices(services, serviceCount);
    freeServices(services, serviceCount);
}