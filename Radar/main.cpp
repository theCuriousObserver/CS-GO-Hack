#include "memory.h"
#include <thread>

namespace offsets
{
	// client.dll
	constexpr auto localPlayer = 0xDB35DC;
	constexpr auto entityList = 0x4DCEEAC;

	// entity
	constexpr auto teamNum = 0xF4;
	constexpr auto spotted = 0x93D;
}

int main()
{
	const auto memory = Memory("csgo.exe");
	const auto client = memory.GetModuleAddress("client.dll");

	while (true)
	{

		const auto localPlayer = memory.Read<std::uintptr_t>(client + offsets::localPlayer);
		const auto localTeam = memory.Read<std::uintptr_t>(client + offsets::teamNum);

		for (auto i = 1; i <= 64; ++i)
		{
			const auto entity = memory.Read<std::uintptr_t>(client + offsets::entityList + i * 0x10);

			if (memory.Read<std::uintptr_t>(entity + offsets::teamNum) == localTeam) // Checks if entity is in our team
				continue;

			memory.Write<bool>(entity + offsets::spotted, true);
		}

		std::this_thread::sleep_for(std::chrono::milliseconds(1));
	}
	return 0;
}