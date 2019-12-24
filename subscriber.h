//
// Created by magom on 23.12.2019.
//

#ifndef OOP_EXERCISE_08_SUBSCRIBER_H
#define OOP_EXERCISE_08_SUBSCRIBER_H

#include <iostream>
#include <condition_variable>
#include <thread>
#include <vector>
#include <mutex>
#include "factory.h"
#include "figure.h"
#include "processor.h"

struct subscriber {
    void operator()();
    std::vector<std::shared_ptr<processor>> processors;
    std::shared_ptr<std::vector<std::shared_ptr<figure>>> buffer;
    std::mutex mtx;
    std::condition_variable cv;
    bool end = false;

};

#endif //OOP_EXERCISE_08_SUBSCRIBER_H
