#include <sys/apparmor.h>

int main()
{
  return aa_is_enabled();
}
