import Container from 'react-bootstrap/Container';
import Row from 'react-bootstrap/Row';
import Col from 'react-bootstrap/Col';
import Image from 'react-bootstrap/Image';

const teamsData = [
  {
    id: 1,
    image: require('../assets/images/habibi.png'),
    fbLink: 'https://www.facebook.com',
    twitterLink: 'https://www.twitter.com',
    linkedinLink: 'https://www.linkedin.com',
    name: 'Aditya Habibi',
    designation: 'Chief Executive Officer',
    description: 'Inisiator di balik visi AHA TECH, berfokus pada strategi pertumbuhan dan kepemimpinan produk.'
  },
  {
    id: 2,
    image: 'https://avatars.githubusercontent.com/u/217610308?v=4',
    fbLink: 'https://www.facebook.com',
    twitterLink: 'https://www.twitter.com',
    linkedinLink: 'https://www.linkedin.com',
    name: 'Faiz Akmal',
    designation: 'Project Manager',
    description: 'Mengorkestrasi alur kerja tim, komunikasi klien, dan memastikan proyek selesai tepat waktu.'
  },
  {
    id: 3,
    image: 'https://adariya.vercel.app/_next/image?url=%2Fimages%2Fabout-profile.jpg&w=256&q=75',
    fbLink: 'https://www.facebook.com',
    twitterLink: 'https://www.twitter.com',
    linkedinLink: 'https://www.linkedin.com',
    name: 'Adrian',
    designation: 'DevOps Engineer',
    description: 'Ahli dalam arsitektur Linux, automasi deployment CI/CD, dan keandalan performa server.'
  },
  {
    id: 4,
    image: require('../assets/images/najmi.jpg'),
    fbLink: 'https://www.facebook.com',
    twitterLink: 'https://www.twitter.com',
    linkedinLink: 'https://www.linkedin.com',
    name: "Najmi Sa'idan",
    designation: 'UI/UX Designer',
    description: 'Merancang antarmuka produk digital yang modern, estetis, dan intuitif bagi pengguna.'
  },
  {
    id: 5,
    image: require('../assets/images/ihsan.png'),
    fbLink: 'https://www.facebook.com',
    twitterLink: 'https://www.twitter.com',
    linkedinLink: 'https://www.linkedin.com',
    name: 'Ihsan',
    designation: 'Software Developer',
    description: 'Mengembangkan logika aplikasi web dan mobile dengan kode yang bersih, scalable, dan terstandarisasi.'
  },
  {
    id: 6,
    image: require('../assets/images/nasril.jpg'),
    fbLink: 'https://www.facebook.com',
    twitterLink: 'https://www.twitter.com',
    linkedinLink: 'https://www.linkedin.com',
    name: 'Nasril Ilham',
    designation: 'Lead AI & Developer',
    description: 'Fokus pada riset implementasi AI agent serta integrasi teknologi mutakhir ke dalam sistem web.'
  },
  {
    id: 7,
    image: require('../assets/images/Dzakha.jpg'),
    fbLink: 'https://www.facebook.com',
    twitterLink: 'https://www.twitter.com',
    linkedinLink: 'https://www.linkedin.com',
    name: 'Roamar Dzakha',
    designation: 'IoT Specialist',
    description: 'Berpengalaman dalam riset prototipe hardware, integrasi sensor cerdas, dan inovasi berbasis IoT.'
  },
  {
    id: 8,
    image: require('../assets/images/aldi.png'),
    fbLink: 'https://www.facebook.com',
    twitterLink: 'https://www.twitter.com',
    linkedinLink: 'https://www.linkedin.com',
    name: 'Aldi MIT',
    designation: 'SEO & Performance Expert',
    description: 'Mengoptimalkan performa teknis web, struktur visibilitas pencarian, dan strategi digital presence.'
  }
];

function AppTeams() {
  return (
    <section id="teams" className="block teams-block">
      <Container fluid>
        <div className="title-holder">
          <h2>Our Team</h2>
          <div className="subtitle">tim profesional di balik setiap inovasi dan layanan kami</div>
        </div>
        <Row>
          {
            teamsData.map(teams => {
              return (
                <Col sm={3} key={teams.id}>
                  <div className='image'>
                    <Image src={teams.image} fluid />
                    <div className='overlay'>
                      <div className='socials'>
                        <ul>
                          <li><a href={teams.fbLink}><i className="fab fa-facebook-f"></i></a></li>
                          <li><a href={teams.twitterLink}><i className="fab fa-twitter"></i></a></li>
                          <li><a href={teams.linkedinLink}><i className="fab fa-linkedin-in"></i></a></li>
                        </ul>
                      </div>
                    </div>
                  </div>
                  <div className='content'>
                    <h3>{teams.name}</h3>
                    <span className='designation'>{teams.designation}</span>
                    <p>{teams.description}</p>
                  </div>
                </Col>
              );
            })
          }
        </Row>
      </Container>
    </section>
  );
}

export default AppTeams;