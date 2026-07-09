#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

struct Request {
    int Si, Fi;
};

bool compareRequests(const Request &a, const Request &b) {
    return a.Si < b.Si;
}

int main() {
    int N, R, Q;
    double P;
    cin >> N >> R >> Q >> P;

    vector<Request> requests(R);
    for (int i = 0; i < R; ++i) {
        cin >> requests[i].Si >> requests[i].Fi;
    }

    // Sort the requests by start time
    sort(requests.begin(), requests.end(), compareRequests);

    // Priority queue to manage car availability times
    priority_queue<int, vector<int>, greater<int>> availableCars;

    // Initially, all Q cars are available
    for (int i = 0; i < Q; ++i) {
        availableCars.push(0);
    }

    int unmetRequests = 0;

    for (const auto &request : requests) {
        int Si = request.Si;
        int Fi = request.Fi;

        // Free up cars that are available before current request's start time
        while (!availableCars.empty() && availableCars.top() <= Si) {
            availableCars.pop();
        }

        if (availableCars.size() < Q) {
            // If there are cars available, fulfill the request
            availableCars.push(Fi);
        } else {
            // No cars available for this request
            ++unmetRequests;
        }
    }

    double unmetPercentage = (unmetRequests / (double)R) * 100.0;
    cout << (R - unmetRequests) << "/" << R << ": " << (unmetPercentage > P ? "Yes" : "No") << endl;

    return 0;
}

