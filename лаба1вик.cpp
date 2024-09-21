#include <iostream>
#include <stdexcept>

class Player {
public:
    // Поля класса
    int hp; // Здоровье игрока
    int magic_power; // Магическая сила игрока
    int stamina; // Выносливость игрока
    double magic_damage; // Магический урон игрока
    double physical_damage; // Физический урон игрока

    // Метод для установки начальных значений полей
    void SetInitialValues(int hp, int magic_power, int stamina, double magic_damage, double physical_damage) {
        this->hp = hp;
        this->magic_power = magic_power;
        this->stamina = stamina;
        this->magic_damage = magic_damage;
        this->physical_damage = physical_damage;
    }

    // Метод для просмотра текущего состояния полей
    void DisplayCurrentState() {
        std::cout << "HP: " << hp << ", Magic Power: " << magic_power << ", Stamina: " << stamina
            << ", Magic Damage: " << magic_damage << ", Physical Damage: " << physical_damage << std::endl;
    }

    // Метод для расчета крутости игрока
    void CalculateCoolness() {
        try {
            if (stamina == 0)
                throw std::runtime_error("Stamina is zero.");
            if (magic_power == 0)
                throw std::runtime_error("Magic Power is zero.");
            if (hp == 0)
                throw std::runtime_error("HP is zero.");

            double coolness = (hp * magic_power) / static_cast<double>(stamina) +
                (hp * stamina) / static_cast<double>(magic_power) -
                (stamina * magic_power) / static_cast<double>(hp);
            std::cout << "Player Coolness: " << coolness << std::endl;
        }
        catch (const std::runtime_error& ex) {
            std::cout << "Error: " << ex.what() << std::endl;
        }
    }

    // Метод для расчета магического и физического урона с бонусом
    void CalculateDamage() {
        double magicDamageWithBonus = (magic_damage * magic_power) - stamina;
        double physicalDamageWithBonus = (physical_damage * stamina + hp) - magic_power;

        std::cout << "Magic Damage with Bonus: " << magicDamageWithBonus << std::endl;
        std::cout << "Physical Damage with Bonus: " << physicalDamageWithBonus << std::endl;
    }
};

int main() {
    // Создание объекта класса Player
    Player player;

    // Установка начальных значений
    player.SetInitialValues(100, 50, 30, 20.5, 15.3);

    // Просмотр текущего состояния
    player.DisplayCurrentState();

    // Расчет крутости игрока
    player.CalculateCoolness();

    // Расчет магического и физического урона с бонусом
    player.CalculateDamage();

    return 0;
}
