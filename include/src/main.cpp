#include "Evaluator.hpp"
#include <iostream>

int main() {
    std::cout << "===========================================\n";
    std::cout << "  C++ LLM Code Evaluation Engine v1.0\n";
    std::cout << "===========================================\n";

    std::string sampleLLMCode = R"(
        #include <iostream>
        int main() {
            std::cout << "LLM Generated Code Running..." << std::endl;
            return 0;
        }
    )";

    Evaluator eval;
    EvalResult report = eval.evaluateSnippet(sampleLLMCode);

    std::cout << "\n--- Evaluation Report ---\n";
    std::cout << "Static Analysis: " << (report.passedStaticAnalysis ? "PASSED" : "FAILED") << "\n";
    std::cout << "Execution:       " << (report.executionSuccess ? "PASSED" : "FAILED") << "\n";
    std::cout << "Latency:         " << report.executionTimeMs << " ms\n";
    std::cout << "Log:             " << report.outputLog << "\n";

    return 0;
}
