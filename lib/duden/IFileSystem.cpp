#include "IFileSystem.h"
#include <QString>
#include <algorithm>

namespace duden {

bool CaseInsensitiveLess::operator()(const std::filesystem::path& left,
                                     const std::filesystem::path& right) const {
    auto qleft = QString::fromStdString(left.string());
    auto qright = QString::fromStdString(right.string());
    return qleft.compare(qright, Qt::CaseInsensitive) < 0;
}

} // namespace duden
