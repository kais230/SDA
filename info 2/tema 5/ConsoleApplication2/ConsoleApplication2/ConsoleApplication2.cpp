
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Activity {
    string discipline;
    string teacher;
    vector<string> students;
};

void insertionSort(vector<string>& arr) {
    for (int i = 1; i < arr.size(); i++) {
        string key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

bool compare(Activity a, Activity b) {
    return a.discipline < b.discipline;
}

int main() {
    vector<Activity> activities;
    string discipline, teacher, student;

    while (true) {

        cin >> discipline;

        if (discipline == "END") {
            break;
        }

        cin >> teacher;

        int index = -1;
        for (int i = 0; i < activities.size(); i++) {
            if (activities[i].discipline == discipline) {
                index = i;
                break;
            }
        }
        //folosim index pentru a vedea daca o materie a fost aduagata deja sau nu. index va fi -1 daca materia inca nu a fost aduagata
        if (index == -1) {
            Activity newActivity;
            newActivity.discipline = discipline;
            newActivity.teacher = teacher;
            activities.push_back(newActivity);
            index = activities.size() - 1;
        }

        cin >> student;

        bool isDuplicate = false;
        //verificam daca un student a fost introdus deja in vectorul de structura
        for (int i = 0; i < activities[index].students.size(); i++) {
            if (activities[index].students[i] == student) {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate) {
            activities[index].students.push_back(student);
        }
    }

    //sortam disciplinele in ordine alfabetica
    for (int i = 0; i < activities.size(); i++) {
        for (int j = i + 1; j < activities.size(); j++) {
            if (compare(activities[j], activities[i])) {
                swap(activities[i], activities[j]);
            }
        }
    }

    //sortam studentii in ordine alfabetica
    for (int i = 0; i < activities.size(); i++) {
        insertionSort(activities[i].students);
    }

 
    //afisare
    for (int i = 0; i < activities.size(); i++) {
        cout << activities[i].discipline << endl;
        cout << activities[i].teacher << endl;


        for (int j = 0; j < activities[i].students.size(); j++) {
            cout << activities[i].students[j] << endl;
        }
    }

    return 0;
}


