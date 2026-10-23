#pragma once


class Game {
public:
	Game();
	~Game();
	void Run();
private:
	bool m_ISRunnin;
	bool Init();
	void ProcessInputs();
	void Update();
	void Draw();
};