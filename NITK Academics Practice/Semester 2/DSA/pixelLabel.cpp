#include <bits/stdc++.h>
using namespace std;

void printImg(vector<vector<int>> img)
{
    for (int i = 0; i < img.size(); i += 1)
    {
        for (int j = 0; j < img[0].size(); j += 1)
        {
            cout << img[i][j] << " ";
        }
        cout << endl;
    }
}

// helper function to check if the given (row, col) is within the bounds
// and if they are not yet marked
bool isWithinBoundsAndUnMarked(int row, int col, vector<vector<int>> &img)
{
    int m = img.size(), n = img[0].size();
    return (row >= 0 and row < m) and (col >= 0 and col < n) and (img[row][col] == 1);
}

void labelImage(vector<vector<int>> &img)
{
    int m = img.size(), n = img[0].size();

    queue<pair<int, int>> q;

    // tracks the label number to be marked next
    int nextLabel = 2;

    for (int i = 0; i < m; i += 1)
    {
        for (int j = 0; j < n; j += 1)
        {
            if (img[i][j] == 1)
            {
                q.push({i, j});

                while (!q.empty())
                {
                    // for each element popped from queue, label it appropriately
                    int row = q.front().first, col = q.front().second;
                    q.pop();
                    img[row][col] = nextLabel;

                    // check in 4 directions of the popped element, if the cells have 1
                    // then push them to queue, to be explored later on
                    if (isWithinBoundsAndUnMarked(row - 1, col, img))
                        q.push({row - 1, col});
                    if (isWithinBoundsAndUnMarked(row + 1, col, img))
                        q.push({row + 1, col});
                    if (isWithinBoundsAndUnMarked(row, col - 1, img))
                        q.push({row, col - 1});
                    if (isWithinBoundsAndUnMarked(row, col + 1, img))
                        q.push({row, col + 1});
                }

                nextLabel += 1;
            }
        }
    }
}

int main(int argc, char *argv[])
{
    vector<vector<int>> img = {
        {1, 1, 0, 0, 0},
        {1, 1, 0, 0, 1},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 1, 1},
        {0, 0, 0, 0, 1},
    };

    cout << "before labelling the image component: " << endl;
    printImg(img);

    labelImage(img);

    cout << "after labelling the image component: " << endl;
    printImg(img);

    return 0;
}