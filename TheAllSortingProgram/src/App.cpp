//opengl for later use

//#include <glfw/glfw3.h>
//
//int main(void)
//{
//    glfwwindow* window;
//
//    /* initialize the library */
//    if (!glfwinit())
//        return -1;
//
//    /* create a windowed mode window and its opengl context */
//    window = glfwcreatewindow(640, 480, "hello world", null, null);
//    if (!window)
//    {
//        glfwterminate();
//        return -1;
//    }
//
//    /* make the window's context current */
//    glfwmakecontextcurrent(window);
//
//    /* loop until the user closes the window */
//    while (!glfwwindowshouldclose(window))
//    {
//        /* render here */
//        glclear(gl_color_buffer_bit);
//
//        /* swap front and back buffers */
//        glfwswapbuffers(window);
//
//        /* poll for and process events */
//        glfwpollevents();
//    }
//
//    glfwterminate();
//    return 0;
//}