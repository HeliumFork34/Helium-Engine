#include <Pentagram.hpp>
#include <windows.h>

void eventCallback(PNT::Window *window, PNT::windowEvent event) {
}

int main(int argc, char *argv[]) {
    if(!PNT::init()) {
        return 1;
    }

    PNT::Window window("JPT Window", 600, 60, 0, 30, ImGuiConfigFlags_ViewportsEnable);
    window.setEventCallback(&eventCallback);
    window.setClearColor(0.25f, 0.25f, 0.25f, 0.25f);

    bool Running = 0;
    // Set icon.
    PNT::image icon("res\\textures\\logo\\JPT_Window_Icon.png");
    window.setIcon(icon);
/*
    icon.loadOnGPU();
    PNT::image pic1("res\\textures\\logo\\Ghoul.png");
    pic1.loadOnGPU();

    float vertices[] = {
        -0.5f, -0.5f, 0.0f,
        0.5f, -0.5f, 0.0f,
        0.0f,  0.5f, 0.0f
    };

    window.hide();

    int BeepFreq = 1000;
    int WinPos1x = 0, WinPos1y = 100, WinSize1x = 140, WinSize1y = 260;
    int WinPos2x = 200, WinPos2y = 200, WinSize2x = 400, WinSize2y = 400;
    int32_t I = 0, Cycle = WinSize2x;
    bool Button1 = 0, Button2 = 0, Button3 = 0, Button3_Active = 0;
    unsigned int Button1Size = 100, Button2Size = 100, Button3Size = 100;

    while(!window.shouldClose()) {
        PNT::processEvents();

        window.startFrame();
        //WINDOW 1
        ImGui::Begin("Controls");
        ImGui::SetWindowSize(ImVec2(WinSize1x, WinSize1y));
        if (!Running) {ImGui::SetWindowPos(ImVec2(WinPos1x,WinPos1y));}
        unsigned int ButtonNo = 0;
        if (Button1) { Button1Size = 105;}
        else { Button1Size = 100; }
        if (ImGui::Button("Hello", ImVec2(Button1Size, 30))) {window.minimize();}
        if (ImGui::IsItemHovered()) { ButtonNo = 1; Button1 = 1; }
        else { Button1 = 0; }
 
        if (Button2) { Button2Size = 105; }
        else { Button2Size = 100; }
        if (ImGui::Button("You Too", ImVec2(Button2Size, 30))) {window.maximize();}
        if (ImGui::IsItemHovered()) { ButtonNo = 2; Button2 = 1; }
        else { Button2 = 0; }

        if (Button3) { Button3Size = 105; }
        else { Button3Size = 100; }
        if (ImGui::Button("Display Me", ImVec2(Button3Size, 30))) {
            if ( !Button3_Active) { Button3_Active = 1;}
            else { Button3_Active = 0; } 
            }
        if (ImGui::IsItemHovered()) { ButtonNo = 3; Button3 = 1; }
        else { Button3 = 0; }

        if (ButtonNo == 0) {
        window.setClearColor(0.25f, 0.25f, 0.25f, 0.25f);
        }
        ImGui::SliderInt("BeepMe", &BeepFreq, 1000, 7000);
        ImGui::Text("ButtonNo=%u", ButtonNo);
        ImGui::Text("Button1=%u", Button1);
        ImGui::Text("Button2=%u", Button2);
        ImGui::Text("Button3=%u", Button3);
        ImGui::Text("Button3_Active=%u", Button3_Active);
        ImGui::Text("I=%i", I);

        ImGui::End();

        //WINDOW 2
        ImGui::Begin("Cool Stuff");
        ImGui::SetWindowSize(ImVec2(WinSize2x, WinSize2y));
        if (!Running) { ImGui::SetWindowPos(ImVec2(WinPos2x,WinPos2y)); }

        if ( !Button1 & !Button2 ) { icon.ImGuiDraw(ImVec2(BeepFreq/10,BeepFreq/10)); }
        else { 
            if ( I < (Cycle * 0.92) ) { icon.ImGuiDraw(ImVec2(I,I)); }
            else { pic1.ImGuiDraw(ImVec2(WinSize2x,WinSize2y)); }
            }
        if ( Button2 ) { pic1.ImGuiDraw(ImVec2(400,400)); Beep(BeepFreq,50); }

        ImGui::End();

        //WINDOW 3
        if (Button3_Active) {
            ImGui::Begin("Yeeeehaaaaa");
            if (Button3) { ImGui::SetWindowPos(ImVec2(WinPos2x + WinSize2x,WinPos2y + WinSize2y)); }
            ImGui::SetWindowSize(ImVec2(WinSize2x / 2, WinSize2y / 2));
            ImGui::End(); }

        window.endFrame();
        Running = 1;
        if ( Button1 ) { I = I + 1; }
        else { I = 0; }
        if (I > Cycle) { I = 1; }

        }

    PNT::deinit();
    return 0;
*/
while (true) 
{
    /* code */
}

}
