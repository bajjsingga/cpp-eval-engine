#ifndef EVALUATOR_HPP
#define EVALUATOR_HPP

#include <string>

struct EvalResult {
    bool passedStaticAnalysis;
    bool executionSuccess;
    double executionTimeMs;
    std::string outputLog;
};

class Evaluator {
public:
    Evaluator() = default;
    ~Evaluator() = default;

    EvalResult evaluateSnippet(const std::string& codeSnippet);
    bool runClangTidy(const std::string& filePath);
    bool executeInSandbox(const std::string& binaryPath);
};

#endif // EVALUATOR_HPP
