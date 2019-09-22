#ifndef DISPALY_H
#define DISPALY_H
#include <GL/glew.h>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <string>
using namespace std;

class Display
{
    public:
        Display(int width, int height, const string& title);
        void Clear(float r, float g, float b,float a);
        void Update();
        void Bind();
        virtual ~Display();

    protected:

    private:
        Display(const Display& other){}
        void operator=(const Display& other){}
        GLFWwindow* window;
        GLuint VertexArrayID;
        GLuint vertexbuffer;
        GLuint programID;

};

#endif // DISPALY_H
