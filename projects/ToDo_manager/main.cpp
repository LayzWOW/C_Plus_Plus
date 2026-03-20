#include <gtkmm.h>
#include <cairomm/context.h>

class MyArea : public Gtk::DrawingArea {
protected:
      // This is where the drawing happens
      bool on_draw(const Cairo::RefPtr<Cairo::Context>& cr) override {
            Gtk::Allocation allocation = get_allocation();
            const int width = allocation.get_width();
            const int height = allocation.get_height();

            // Coordinates for the center
            double xc = width / 2.0;
            double yc = height / 2.0;
            double radius = std::min(width, height) / 4.0;

            // Draw circle
            cr->set_line_width(5.0);
            cr->set_source_rgb(0.7, 0.2, 0.2); // Reddish color
            cr->arc(xc, yc, radius, 0.0, 2.0 * M_PI); // Full circle
            cr->stroke();

            return true;
      }
};

int main(int argc, char* argv[]) {
      auto app = Gtk::Application::create(argc, argv, "org.gtkmm.example");

      Gtk::Window win;
      win.set_title("GTK Circle Bro");
      win.set_default_size(400, 400);

      MyArea area;
      win.add(area);
      area.show();

      return app->run(win);
}
