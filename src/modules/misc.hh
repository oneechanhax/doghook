#pragma once

namespace sdk {
class UserCmd;
}

namespace misc {
void init_all();
void create_move(sdk::UserCmd *cmd);
void update(float frametime);
} // namespace misc
