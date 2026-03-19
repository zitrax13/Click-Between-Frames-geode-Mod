#include <Geode/Geode.hpp>
#include <Geode/modify/GJBaseGameLayer.hpp>

using namespace geode::prelude;

class $modify(CBFMod, GJBaseGameLayer) {
    void handleButton(bool down, int button, bool player1) {
        // Логика CBF: фиксируем ввод независимо от FPS
        // В версии 2.2081 мы просто вызываем оригинальную функцию,
        // но здесь можно добавить расчет суб-тиков для точности
        
        log::info("Click detected! Down: {}, Button: {}", down, button);
        
        $GJBaseGameLayer::handleButton(down, button, player1);

    }
};
