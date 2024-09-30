#include <iostream>
#include <sstream>
#include <vector>
#include <memory>
#include "RenderMarkdownListStrategy.h"
#include "RenderHtmlListStrategy.h"
#include "RenderTextProcessor.h"

int main() {
    RenderTextProcessor tp;
    tp.setOutputFormat(std::make_unique<RenderMarkdownListStrategy>());
    tp.appendList({ "item1", "item2" });
    std::cout << tp.toString() << std::endl;

    tp.clear();
    tp.setOutputFormat(std::make_unique<RenderHtmlListStrategy>());
    tp.appendList({ "item1", "item2" });
    std::cout << tp.toString() << std::endl;

    return 0;
}
