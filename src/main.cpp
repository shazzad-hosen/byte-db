#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Table {
 private:
  vector<string> columns;
  vector<vector<string>> rows;

 public:
  Table(vector<string> cols) : columns(cols) {}

  void insert(vector<string> row) {
    if (row.size() != columns.size()) {
      cout << "Error: Column count mismatch\n";
      return;
    }
    rows.push_back(row);
  }

  void selectAll() {
    for (const auto& col : columns) {
      cout << col << "\t";
    }
    cout << "\n";

    for (const auto& row : rows) {
      for (const auto& val : row) {
        cout << val << "\t";
      }
      cout << "\n";
    }
  }
};

int main() {
  Table users({"id", "name"});

  users.insert({"1", "Jisan"});
  users.insert({"2", "Ahmed"});

  users.selectAll();
}