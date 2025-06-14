#ifndef TKWIN_WAYLAND_H
#define TKWIN_WAYLAND_H

#include <TKWindow.h>

tkwin_error_t tkwin_waylandCreate(void);
void tkwin_waylandDestroy(void);
bool tkwin_waylandPoll(void);

void tkwin_waylandGetFramebufferSize(uint32_t *width, uint32_t *height);
void tkwin_waylandGetSurfaceData(void **data);

#endif // TKWIN_WAYLAND_H
