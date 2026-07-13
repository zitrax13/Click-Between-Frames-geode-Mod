#include <Geode/Geode.hpp>
#include <Geode/modify/GJBaseGameLayer.hpp>

using namespace geode::prelude;

class $modify(CBFMod, GJBaseGameLayer) {
    // В версии 2.207 используются PlayerButton и bool для зажатия кнопки
    void handleButton(bool down, PlayerButton button, bool isPlayer2) {
        
        // Логика CBF: выводим лог в консоль Geode при каждом клике
        log::info("Click detected! Down: {}, Button: {}", down, static_cast<int>(button));

        // Вызываем оригинальную функцию игры для 2.207
        GJBaseGameLayer::handleButton(down, button, isPlayer2);
    }
};
