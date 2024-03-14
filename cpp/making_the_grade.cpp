#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_scores
    std::vector<int> rounded{};
    for(const auto &i: student_scores) rounded.push_back(static_cast<int>(i));
    return rounded;
}


// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // TODO: Implement count_failed_students
    int count{0};
    for(const auto &i: student_scores) if(i < 41) count++;
    return count;
}

// Determine how many of the provided student scores were 'the best' based on the provided threshold.
std::vector<int> above_threshold(std::vector<int> student_scores, int threshold) {
    // TODO: Implement above_threshold
    for(int i = 0; i < student_scores.size() - 1; i++){
        // std::cout << "i :" << student_scores[i] << " and size is " << student_scores.size() <<  std::endl;
        if(student_scores.at(i) < threshold) student_scores.erase(student_scores.begin() + i);
    }
    return student_scores;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement letter_grades
    return {};
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking
    return {};
}

// Create a string that contains the name of the first student to make a perfect score on the exam.
std::string perfect_score(std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement perfect_score
    return "";
}