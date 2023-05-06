#include "engine.H"

using Engine::AIGym;

void Engine::AIGym::StartApplication()
{
    mWindow = std::make_shared<Graphics::Window>(800, 600, "Anurag's Window");
    mWindow->CreateWindow();

    while(!mWindow->WindowShouldClose())
    {
        mWindow->Update();
    }

    mWindow->Close();
}

void Engine::AIGym::OnEvent(Engine::Event::Event& e)
{

}
