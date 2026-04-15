#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>

using namespace ftxui;

int main() {
    // Documento com args diretos (não {})
    Element document = vbox(
        text("BEETHOVEN-CLI") | bold | center,
        text("Olá mundo FTXUI!") | center,
        text("Gauge exemplo:"),
        gauge(0.5) | border
    );

    // Screen com Fit(document)
    auto screen = Screen::Create(
        Dimension::Full(),
        Dimension::Fit(document)
    );

    Render(screen, document);
    screen.Print();
    return 0;
}