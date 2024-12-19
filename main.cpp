#include "include/matlib.h"
#include "include/geometry.h"

#include "include/CallOption.h"
#include "include/PutOption.h"

#include "include/BlackScholesModel.h"
#include "include/MultiStockModel.h"

#include "include/MonteCarloPricer.h"
#include "include/UpAndOutOption.h"
#include "include/DownAndOutOption.h"
#include "include/Portfolio.h"
#include "include/Matrix.h"
#include "include/Executor.h"
#include "include/ThreadingExamples.h"
#include "include/MargrabeOption.h"
#include "include/RectangleRulePricer.h"

using namespace std;

int main() {

    testMatrix();
    testMatlib();
    testMultiStockModel();
	testBlackScholesModel();
	testGeometry();

    testCallOption();
    testPutOption();

    testMonteCarloPricer();
    testDownAndOutOption();
    testContinuousTimeOptionBase();
    testPortfolio();
    testPutOption();
	testExecutor();
	testThreadingExamples();
	testUpAndOutOption();
	testMargrabeOption();
	testRectangleRulePricer();
    return 0;
}